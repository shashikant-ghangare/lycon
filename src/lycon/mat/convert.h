#pragma once

#include "lycon/mat/shared.h"
#include "opencv2/core/neon_utils.h"

using namespace cv;

namespace lycon
{
void convertAndUnrollScalar(const Mat &sc, int buftype, uchar *scbuf, size_t blocksize);

BinaryFunc getConvertFunc(int sdepth, int ddepth);
}
