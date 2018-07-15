/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "SafeUnion.h"
#include <android-base/logging.h>

namespace android {
namespace hardware {
namespace tests {
namespace safeunion {
namespace V1_0 {
namespace implementation {

// Methods from ::android::hardware::tests::safeunion::V1_0::ISafeUnion follow.
Return<void> SafeUnion::newLargeSafeUnion(newLargeSafeUnion_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) newLargeSafeUnion()";

    LargeSafeUnion ret;
    _hidl_cb(ret);
    return Void();
}

Return<void> SafeUnion::setA(const LargeSafeUnion& myUnion, int8_t a, setA_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setA(myUnion, " << a << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.a(a);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setB(const LargeSafeUnion& myUnion, uint16_t b, setB_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setB(myUnion, " << b << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.b(b);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setC(const LargeSafeUnion& myUnion, int32_t c, setC_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setC(myUnion, " << c << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.c(c);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setD(const LargeSafeUnion& myUnion, uint64_t d, setD_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setD(myUnion, " << d << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.d(d);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setE(const LargeSafeUnion& myUnion, const hidl_array<int8_t, 13>& e, setE_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setE(myUnion, " << toString(e) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.e(e);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setF(const LargeSafeUnion& myUnion, const hidl_array<int64_t, 5>& f, setF_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setF(myUnion, " << toString(f) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.f(f);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setG(const LargeSafeUnion& myUnion, const hidl_string& g, setG_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setG(myUnion, " << toString(g) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.g(g);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setH(const LargeSafeUnion& myUnion, const hidl_vec<bool>& h, setH_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setH(myUnion, " << toString(h) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.h(h);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setI(const LargeSafeUnion& myUnion, const hidl_vec<uint64_t>& i, setI_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setI(myUnion, " << toString(i) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.i(i);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setJ(const LargeSafeUnion& myUnion, const J& j, setJ_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setJ(myUnion, " << toString(j) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.j(j);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setK(const LargeSafeUnion& myUnion, const LargeSafeUnion::K& k, setK_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setK(myUnion, " << toString(k) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.k(k);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setL(const LargeSafeUnion& myUnion, const SmallSafeUnion& l, setL_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setL(myUnion, " << toString(l) << ")";

    LargeSafeUnion myNewUnion = myUnion;
    myNewUnion.l(l);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::newInterfaceTypeSafeUnion(newInterfaceTypeSafeUnion_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) newInterfaceTypeSafeUnion()";

    InterfaceTypeSafeUnion ret;
    _hidl_cb(ret);
    return Void();
}

Return<void> SafeUnion::setInterfaceA(const InterfaceTypeSafeUnion& myUnion, uint32_t a, setInterfaceA_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setInterfaceA(myUnion, " << a << ")";

    InterfaceTypeSafeUnion myNewUnion = myUnion;
    myNewUnion.a(a);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setInterfaceB(const InterfaceTypeSafeUnion& myUnion, const hidl_array<int8_t, 7>& b, setInterfaceB_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setInterfaceB(myUnion, " << toString(b) << ")";

    InterfaceTypeSafeUnion myNewUnion = myUnion;
    myNewUnion.b(b);

    _hidl_cb(myNewUnion);
    return Void();
}

Return<void> SafeUnion::setInterfaceC(const InterfaceTypeSafeUnion& myUnion, const sp<::android::hardware::tests::safeunion::V1_0::IOtherInterface>& c, setInterfaceC_cb _hidl_cb) {
    LOG(INFO) << "SERVER(SafeUnion) setInterfaceC(myUnion, " << toString(c) << ")";

    InterfaceTypeSafeUnion myNewUnion = myUnion;
    myNewUnion.c(c);

    _hidl_cb(myNewUnion);
    return Void();
}

ISafeUnion* HIDL_FETCH_ISafeUnion(const char* /* name */) {
    return new SafeUnion();
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace safeunion
}  // namespace tests
}  // namespace hardware
}  // namespace android