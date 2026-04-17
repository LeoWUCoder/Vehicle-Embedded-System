# S32K144 VCU CAN

基于 NXP S32K144 微控制器的 AUTOSAR CAN 总线项目（个人学习），适用于新能源汽车整车控制器 (VCU) 开发。

## 项目简介

本项目实现了一个完整的 AUTOSAR CAN 通信栈，包含以下特性：

- **硬件平台**: NXP S32K144 (ARM Cortex-M4F)+周立功CAN分析仪/Vector的CAN卡
- **开发环境**: IAR Embedded Workbench，TsMaster，Davinci软件
- **软件架构**: AUTOSAR 4.2 标准
- **CAN 速率**: 250kbps
- **协议栈**: COM → PduR → CanIf → CAN Driver

## 目录结构

```
S32K144_Start_new_IAR/
├── Appl/                    # 应用层代码
│   ├── GenData/            # AUTOSAR 配置生成文件
│   └── Source/             # 应用源文件 (CtLedTask.c, BswM 等)
├── BSW/                    # BSW 层
│   ├── Can/                # CAN Driver
│   ├── CanIf/              # CAN Interface
│   ├── Com/                # COM 模块
│   ├── PduR/               # PDU Router
│   └── ...
├── MCAL/                   # MCAL 层 (NXP 官方驱动)
│   ├── Can_TS_T40D2M10I1R0/
│   ├── Dio/
│   ├── Gpt/
│   └── ...
├── Config/                 # AUTOSAR 配置 (ECUC)
│   └── ECUC/
├── Inputfiles/             # 输入文件 (DBC, CDD)
│   ├── CAN_II.dbc         # CAN 网络数据库
│   └── ForTraining.cdd
└── Device/                 # 芯片相关头文件
```

## CAN 报文定义

### 发送报文 (TX)

| 报文名称 | CAN ID | DLC | 周期 | 说明 |
|---------|--------|-----|-----|------|
| VCU_Start | 0x20 | 8 | 100ms | VCU 启动信号 |
| VCU_VehicleSpeed | 0x11 | 8 | 100ms | 车速信息 |
| VCU_DriveMode | 0x12 | 8 | 100ms | 驾驶模式 |

### 信号定义

| 信号名称 | 报文 | 起始位 | 长度 | 类型 | 说明 |
|---------|------|--------|------|------|------|
| Brake_Signal | VCU_Start | 0 | 8 | Unsigned | 刹车信号 |
| Drive_Standy | VCU_Start | 8 | 8 | Unsigned | 驱动/待机模式 |
| VehicleSpeed | VCU_VehicleSpeed | 0 | 16 | Unsigned | 车速 (0.1 km/h) |
| Ignition_State | VCU_Start | 16 | 8 | Unsigned | 点火状态 (0=OFF, 1=ACC, 2=ON, 3=START) |

### 接收报文 (RX)

| 报文名称 | CAN ID | DLC | 说明 |
|---------|--------|-----|------|
| VCU_Receive | 0x30 | 8 | VCU 接收报文 |

## 快速开始

### 1. 打开工程

在 IAR Embedded Workbench 中打开 `S32K144_Start_new_IAR/Project.eww` 文件。

### 2. 编译与下载

1. 选择目标配置 (Debug/Release)
2. 点击 Build (F7) 编译
3. 点击 Download and Debug 烧录到开发板

### 3. 运行验证

使用 CAN 分析工具 (如 TSMaster, PCAN-Explorer) 验证 CAN 通信：

- 监听 ID 0x20 报文，确认刹车信号和驾驶模式发送正常
- 发送 ID 0x30 报文，验证接收功能

## 代码示例

### 发送 CAN 信号

```c
#include "Com.h"

// 发送刹车信号
uint8 Brake = 10;
Com_SendSignal(ComConf_ComSignal_Brake_Signal_oVCU_Start_oCAN00_df96e3b4_Tx, &Brake);

// 发送驾驶模式
uint8 Drive = 40;
Com_SendSignal(ComConf_ComSignal_Drive_Standy_oVCU_Start_oCAN00_2617feb5_Tx, &Drive);
```

### 接收处理

在 `Appl_Cbk.h` 中定义接收回调函数：

```c
FUNC(void, COM_APPL_CODE) Crash_Success(void)
{
    Rte_Write_CtLedTask_Drive_Standy_u8Sig(40);
}
```

## AUTOSAR 通信流程

### 发送路径
```
SWC → RTE → COM → PduR → CanIf → CAN Driver → CAN Bus
```

### 接收路径
```
CAN Bus → CAN Driver → CanIf → PduR → COM → RTE → SWC
```

## 依赖工具

- [IAR Embedded Workbench for ARM](https://www.iar.com/) - 编译环境
- [CANdb++](https://www.vector.com/) - DBC 文件编辑
- [TSMaster](https://www.toshniko.cn/) - CAN 分析工具 (可选)
- [Vector DaVinci](https://www.vector.com/) - AUTOSAR 配置工具 (可选)

## 技术规范

- AUTOSAR 标准: 4.2
- CAN 协议: ISO 11898
- 功能安全: 符合 ISO 26262 ASIL B 要求

## 相关文档

- [S32K144 原理图](./SCH_S32K144_EVB原理图.pdf)
- [CAN 网络数据库](./S32K144_Start_new_IAR/Inputfiles/CAN.dbc)

## 许可证

MIT License

## 贡献指南

欢迎提交 Issue 和 Pull Request！

---

*本项目基于 AUTOSAR 标准实现，适用于汽车电子 VCU 开发学习与产品研发的基础学习。