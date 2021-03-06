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

#include <tencentcloud/scf/v20180416/model/Trigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

Trigger::Trigger() :
    m_modTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_customArgumentHasBeenSet(false)
{
}

CoreInternalOutcome Trigger::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerDesc") && !value["TriggerDesc"].IsNull())
    {
        if (!value["TriggerDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.TriggerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerDesc = string(value["TriggerDesc"].GetString());
        m_triggerDescHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Trigger.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CustomArgument") && !value["CustomArgument"].IsNull())
    {
        if (!value["CustomArgument"].IsString())
        {
            return CoreInternalOutcome(Error("response `Trigger.CustomArgument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customArgument = string(value["CustomArgument"].GetString());
        m_customArgumentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Trigger::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_modTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_customArgumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomArgument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_customArgument.c_str(), allocator).Move(), allocator);
    }

}


string Trigger::GetModTime() const
{
    return m_modTime;
}

void Trigger::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Trigger::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string Trigger::GetType() const
{
    return m_type;
}

void Trigger::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Trigger::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Trigger::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void Trigger::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool Trigger::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string Trigger::GetTriggerName() const
{
    return m_triggerName;
}

void Trigger::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool Trigger::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string Trigger::GetAddTime() const
{
    return m_addTime;
}

void Trigger::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Trigger::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

int64_t Trigger::GetEnable() const
{
    return m_enable;
}

void Trigger::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool Trigger::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string Trigger::GetCustomArgument() const
{
    return m_customArgument;
}

void Trigger::SetCustomArgument(const string& _customArgument)
{
    m_customArgument = _customArgument;
    m_customArgumentHasBeenSet = true;
}

bool Trigger::CustomArgumentHasBeenSet() const
{
    return m_customArgumentHasBeenSet;
}

