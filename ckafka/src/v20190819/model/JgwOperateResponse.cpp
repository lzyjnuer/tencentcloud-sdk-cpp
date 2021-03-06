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

#include <tencentcloud/ckafka/v20190819/model/JgwOperateResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

JgwOperateResponse::JgwOperateResponse() :
    m_returnCodeHasBeenSet(false),
    m_returnMessageHasBeenSet(false)
{
}

CoreInternalOutcome JgwOperateResponse::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `JgwOperateResponse.ReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = string(value["ReturnCode"].GetString());
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnMessage") && !value["ReturnMessage"].IsNull())
    {
        if (!value["ReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `JgwOperateResponse.ReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMessage = string(value["ReturnMessage"].GetString());
        m_returnMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JgwOperateResponse::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_returnCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_returnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_returnMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_returnMessage.c_str(), allocator).Move(), allocator);
    }

}


string JgwOperateResponse::GetReturnCode() const
{
    return m_returnCode;
}

void JgwOperateResponse::SetReturnCode(const string& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool JgwOperateResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string JgwOperateResponse::GetReturnMessage() const
{
    return m_returnMessage;
}

void JgwOperateResponse::SetReturnMessage(const string& _returnMessage)
{
    m_returnMessage = _returnMessage;
    m_returnMessageHasBeenSet = true;
}

bool JgwOperateResponse::ReturnMessageHasBeenSet() const
{
    return m_returnMessageHasBeenSet;
}

