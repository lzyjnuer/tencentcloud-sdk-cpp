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

#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

StartOnlineRecordRequest::StartOnlineRecordRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_recordUserIdHasBeenSet(false),
    m_recordUserSigHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_concatHasBeenSet(false),
    m_whiteboardHasBeenSet(false),
    m_mixStreamHasBeenSet(false),
    m_extrasHasBeenSet(false),
    m_audioFileNeededHasBeenSet(false)
{
}

string StartOnlineRecordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_recordUserIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUserSigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordUserSig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordUserSig.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_concatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Concat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_concat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_whiteboardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mixStreamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MixStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mixStream.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extrasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extras";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_extras.begin(); itr != m_extras.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_audioFileNeededHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioFileNeeded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioFileNeeded, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StartOnlineRecordRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartOnlineRecordRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t StartOnlineRecordRequest::GetRoomId() const
{
    return m_roomId;
}

void StartOnlineRecordRequest::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string StartOnlineRecordRequest::GetRecordUserId() const
{
    return m_recordUserId;
}

void StartOnlineRecordRequest::SetRecordUserId(const string& _recordUserId)
{
    m_recordUserId = _recordUserId;
    m_recordUserIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordUserIdHasBeenSet() const
{
    return m_recordUserIdHasBeenSet;
}

string StartOnlineRecordRequest::GetRecordUserSig() const
{
    return m_recordUserSig;
}

void StartOnlineRecordRequest::SetRecordUserSig(const string& _recordUserSig)
{
    m_recordUserSig = _recordUserSig;
    m_recordUserSigHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordUserSigHasBeenSet() const
{
    return m_recordUserSigHasBeenSet;
}

string StartOnlineRecordRequest::GetGroupId() const
{
    return m_groupId;
}

void StartOnlineRecordRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

Concat StartOnlineRecordRequest::GetConcat() const
{
    return m_concat;
}

void StartOnlineRecordRequest::SetConcat(const Concat& _concat)
{
    m_concat = _concat;
    m_concatHasBeenSet = true;
}

bool StartOnlineRecordRequest::ConcatHasBeenSet() const
{
    return m_concatHasBeenSet;
}

Whiteboard StartOnlineRecordRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void StartOnlineRecordRequest::SetWhiteboard(const Whiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool StartOnlineRecordRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}

MixStream StartOnlineRecordRequest::GetMixStream() const
{
    return m_mixStream;
}

void StartOnlineRecordRequest::SetMixStream(const MixStream& _mixStream)
{
    m_mixStream = _mixStream;
    m_mixStreamHasBeenSet = true;
}

bool StartOnlineRecordRequest::MixStreamHasBeenSet() const
{
    return m_mixStreamHasBeenSet;
}

vector<string> StartOnlineRecordRequest::GetExtras() const
{
    return m_extras;
}

void StartOnlineRecordRequest::SetExtras(const vector<string>& _extras)
{
    m_extras = _extras;
    m_extrasHasBeenSet = true;
}

bool StartOnlineRecordRequest::ExtrasHasBeenSet() const
{
    return m_extrasHasBeenSet;
}

bool StartOnlineRecordRequest::GetAudioFileNeeded() const
{
    return m_audioFileNeeded;
}

void StartOnlineRecordRequest::SetAudioFileNeeded(const bool& _audioFileNeeded)
{
    m_audioFileNeeded = _audioFileNeeded;
    m_audioFileNeededHasBeenSet = true;
}

bool StartOnlineRecordRequest::AudioFileNeededHasBeenSet() const
{
    return m_audioFileNeededHasBeenSet;
}


