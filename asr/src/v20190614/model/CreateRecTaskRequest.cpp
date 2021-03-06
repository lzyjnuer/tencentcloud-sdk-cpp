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

#include <tencentcloud/asr/v20190614/model/CreateRecTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace rapidjson;
using namespace std;

CreateRecTaskRequest::CreateRecTaskRequest() :
    m_engineModelTypeHasBeenSet(false),
    m_channelNumHasBeenSet(false),
    m_resTextFormatHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_hotwordIdHasBeenSet(false)
{
}

string CreateRecTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineModelTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineModelType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelNum, allocator);
    }

    if (m_resTextFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResTextFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resTextFormat, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataLen, allocator);
    }

    if (m_hotwordIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HotwordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_hotwordId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRecTaskRequest::GetEngineModelType() const
{
    return m_engineModelType;
}

void CreateRecTaskRequest::SetEngineModelType(const string& _engineModelType)
{
    m_engineModelType = _engineModelType;
    m_engineModelTypeHasBeenSet = true;
}

bool CreateRecTaskRequest::EngineModelTypeHasBeenSet() const
{
    return m_engineModelTypeHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetChannelNum() const
{
    return m_channelNum;
}

void CreateRecTaskRequest::SetChannelNum(const uint64_t& _channelNum)
{
    m_channelNum = _channelNum;
    m_channelNumHasBeenSet = true;
}

bool CreateRecTaskRequest::ChannelNumHasBeenSet() const
{
    return m_channelNumHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetResTextFormat() const
{
    return m_resTextFormat;
}

void CreateRecTaskRequest::SetResTextFormat(const uint64_t& _resTextFormat)
{
    m_resTextFormat = _resTextFormat;
    m_resTextFormatHasBeenSet = true;
}

bool CreateRecTaskRequest::ResTextFormatHasBeenSet() const
{
    return m_resTextFormatHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateRecTaskRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateRecTaskRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateRecTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateRecTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateRecTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateRecTaskRequest::GetUrl() const
{
    return m_url;
}

void CreateRecTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateRecTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateRecTaskRequest::GetData() const
{
    return m_data;
}

void CreateRecTaskRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CreateRecTaskRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t CreateRecTaskRequest::GetDataLen() const
{
    return m_dataLen;
}

void CreateRecTaskRequest::SetDataLen(const uint64_t& _dataLen)
{
    m_dataLen = _dataLen;
    m_dataLenHasBeenSet = true;
}

bool CreateRecTaskRequest::DataLenHasBeenSet() const
{
    return m_dataLenHasBeenSet;
}

string CreateRecTaskRequest::GetHotwordId() const
{
    return m_hotwordId;
}

void CreateRecTaskRequest::SetHotwordId(const string& _hotwordId)
{
    m_hotwordId = _hotwordId;
    m_hotwordIdHasBeenSet = true;
}

bool CreateRecTaskRequest::HotwordIdHasBeenSet() const
{
    return m_hotwordIdHasBeenSet;
}


