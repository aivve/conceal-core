// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2021 Conceal Network & Conceal Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <Common/IInputStream.h>
#include "ISerializer.h"
#include "JsonInputValueSerializer.h"

namespace cn {

class KVBinaryInputStreamSerializer : public JsonInputValueSerializer {
public:
  KVBinaryInputStreamSerializer(common::IInputStream& strm);

  virtual bool binary(void* value, size_t size, common::StringView name) override;
  virtual bool binary(std::string& value, common::StringView name) override;
};

}
