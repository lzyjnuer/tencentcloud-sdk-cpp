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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryOrder请求参数结构体
                */
                class QueryOrderRequest : public AbstractModel
                {
                public:
                    QueryOrderRequest();
                    ~QueryOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主 MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主 MidasAppId
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主 MidasAppId
                     * @param MidasAppId 聚鑫分配的支付主 MidasAppId
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户Id，长度不小于5位， 仅支持字母和数字的组合
                     * @return UserId 用户Id，长度不小于5位， 仅支持字母和数字的组合
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，长度不小于5位， 仅支持字母和数字的组合
                     * @param UserId 用户Id，长度不小于5位， 仅支持字母和数字的组合
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取type=by_order根据订单号 查订单；
type=by_user根据用户id 查订单 。
                     * @return Type type=by_order根据订单号 查订单；
type=by_user根据用户id 查订单 。
                     */
                    std::string GetType() const;

                    /**
                     * 设置type=by_order根据订单号 查订单；
type=by_user根据用户id 查订单 。
                     * @param Type type=by_order根据订单号 查订单；
type=by_user根据用户id 查订单 。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param MidasSecretId 聚鑫分配的安全ID
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取每页返回的记录数。根据用户 号码查询订单列表时需要传。 用于分页展示。Type=by_order时必填
                     * @return Count 每页返回的记录数。根据用户 号码查询订单列表时需要传。 用于分页展示。Type=by_order时必填
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置每页返回的记录数。根据用户 号码查询订单列表时需要传。 用于分页展示。Type=by_order时必填
                     * @param Count 每页返回的记录数。根据用户 号码查询订单列表时需要传。 用于分页展示。Type=by_order时必填
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取记录数偏移量，默认从0开 始。根据用户号码查询订单列 表时需要传。用于分页展示。Type=by_order时必填
                     * @return Offset 记录数偏移量，默认从0开 始。根据用户号码查询订单列 表时需要传。用于分页展示。Type=by_order时必填
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录数偏移量，默认从0开 始。根据用户号码查询订单列 表时需要传。用于分页展示。Type=by_order时必填
                     * @param Offset 记录数偏移量，默认从0开 始。根据用户号码查询订单列 表时需要传。用于分页展示。Type=by_order时必填
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询开始时间，Unix时间戳。Type=by_order时必填
                     * @return StartTime 查询开始时间，Unix时间戳。Type=by_order时必填
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，Unix时间戳。Type=by_order时必填
                     * @param StartTime 查询开始时间，Unix时间戳。Type=by_order时必填
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，Unix时间戳。Type=by_order时必填
                     * @return EndTime 查询结束时间，Unix时间戳。Type=by_order时必填
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，Unix时间戳。Type=by_order时必填
                     * @param EndTime 查询结束时间，Unix时间戳。Type=by_order时必填
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取业务订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     * @return OutTradeNo 业务订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置业务订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     * @param OutTradeNo 业务订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取聚鑫订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     * @return TransactionId 聚鑫订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置聚鑫订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     * @param TransactionId 聚鑫订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     */
                    bool TransactionIdHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主 MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户Id，长度不小于5位， 仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * type=by_order根据订单号 查订单；
type=by_user根据用户id 查订单 。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 每页返回的记录数。根据用户 号码查询订单列表时需要传。 用于分页展示。Type=by_order时必填
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 记录数偏移量，默认从0开 始。根据用户号码查询订单列 表时需要传。用于分页展示。Type=by_order时必填
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询开始时间，Unix时间戳。Type=by_order时必填
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，Unix时间戳。Type=by_order时必填
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 业务订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 聚鑫订单号，OutTradeNo与 TransactionId不能同时为 空，都传优先使用 OutTradeNo
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERREQUEST_H_
