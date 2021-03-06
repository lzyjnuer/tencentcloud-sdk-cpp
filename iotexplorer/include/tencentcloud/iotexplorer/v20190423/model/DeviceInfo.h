/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 设备详细信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param DeviceName 设备名
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     * @return Status 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     * @param Status 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设备密钥，密钥加密的设备返回
                     * @return DevicePsk 设备密钥，密钥加密的设备返回
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 设置设备密钥，密钥加密的设备返回
                     * @param DevicePsk 设备密钥，密钥加密的设备返回
                     */
                    void SetDevicePsk(const std::string& _devicePsk);

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFirstOnlineTime() const;

                    /**
                     * 设置首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstOnlineTime 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstOnlineTime(const int64_t& _firstOnlineTime);

                    /**
                     * 判断参数 FirstOnlineTime 是否已赋值
                     * @return FirstOnlineTime 是否已赋值
                     */
                    bool FirstOnlineTimeHasBeenSet() const;

                    /**
                     * 获取最后一次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginTime 最后一次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLoginTime() const;

                    /**
                     * 设置最后一次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoginTime 最后一次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoginTime(const int64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备固件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 设备固件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置设备固件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 设备固件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取设备证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceCert 设备证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 设置设备证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceCert 设备证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceCert(const std::string& _deviceCert);

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 设置日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogLevel 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogLevel(const int64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 设备地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevAddr LoRaWAN 设备地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDevAddr() const;

                    /**
                     * 设置LoRaWAN 设备地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DevAddr LoRaWAN 设备地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDevAddr(const std::string& _devAddr);

                    /**
                     * 判断参数 DevAddr 是否已赋值
                     * @return DevAddr 是否已赋值
                     */
                    bool DevAddrHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppKey LoRaWAN 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置LoRaWAN 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppKey LoRaWAN 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevEUI LoRaWAN 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDevEUI() const;

                    /**
                     * 设置LoRaWAN 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DevEUI LoRaWAN 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDevEUI(const std::string& _devEUI);

                    /**
                     * 判断参数 DevEUI 是否已赋值
                     * @return DevEUI 是否已赋值
                     */
                    bool DevEUIHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 应用会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppSKey LoRaWAN 应用会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppSKey() const;

                    /**
                     * 设置LoRaWAN 应用会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppSKey LoRaWAN 应用会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppSKey(const std::string& _appSKey);

                    /**
                     * 判断参数 AppSKey 是否已赋值
                     * @return AppSKey 是否已赋值
                     */
                    bool AppSKeyHasBeenSet() const;

                    /**
                     * 获取LoRaWAN 网络会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NwkSKey LoRaWAN 网络会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNwkSKey() const;

                    /**
                     * 设置LoRaWAN 网络会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NwkSKey LoRaWAN 网络会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNwkSKey(const std::string& _nwkSKey);

                    /**
                     * 判断参数 NwkSKey 是否已赋值
                     * @return NwkSKey 是否已赋值
                     */
                    bool NwkSKeyHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 0: 离线, 1: 在线, 2: 获取失败, 3 未激活
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备密钥，密钥加密的设备返回
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * 首次上线时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firstOnlineTime;
                    bool m_firstOnlineTimeHasBeenSet;

                    /**
                     * 最后一次上线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 设备创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备固件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 设备证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * 日志级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * LoRaWAN 设备地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devAddr;
                    bool m_devAddrHasBeenSet;

                    /**
                     * LoRaWAN 应用密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * LoRaWAN 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devEUI;
                    bool m_devEUIHasBeenSet;

                    /**
                     * LoRaWAN 应用会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appSKey;
                    bool m_appSKeyHasBeenSet;

                    /**
                     * LoRaWAN 网络会话密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nwkSKey;
                    bool m_nwkSKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICEINFO_H_
