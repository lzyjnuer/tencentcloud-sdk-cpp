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

#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

ModifyUploadInfoRequest::ModifyUploadInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

string ModifyUploadInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_result, allocator);
    }

    if (m_md5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUploadInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyUploadInfoRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyUploadInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyUploadInfoRequest::GetPkgId() const
{
    return m_pkgId;
}

void ModifyUploadInfoRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool ModifyUploadInfoRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t ModifyUploadInfoRequest::GetResult() const
{
    return m_result;
}

void ModifyUploadInfoRequest::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ModifyUploadInfoRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ModifyUploadInfoRequest::GetMd5() const
{
    return m_md5;
}

void ModifyUploadInfoRequest::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ModifyUploadInfoRequest::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

uint64_t ModifyUploadInfoRequest::GetSize() const
{
    return m_size;
}

void ModifyUploadInfoRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ModifyUploadInfoRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}


