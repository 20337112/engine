// Copyright 2019 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "flutter/flow/testing/mock_texture.h"

namespace flutter {
namespace testing {

MockTexture::MockTexture(int64_t textureId) : Texture(textureId) {}

void MockTexture::Paint(SkCanvas& canvas,
                        const SkRect& bounds,
                        bool freeze,
                        GrContext* context) {
  paint_calls_.emplace_back(PaintCall{canvas, bounds, freeze, context});
}

}  // namespace testing
}  // namespace flutter