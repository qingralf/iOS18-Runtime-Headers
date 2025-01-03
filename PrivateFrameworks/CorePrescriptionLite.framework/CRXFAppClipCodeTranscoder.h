/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite
 */

@interface CRXFAppClipCodeTranscoder : NSObject {
    NSDictionary * _AxisToIDMap;
    NSDictionary * _IDToAxisMap;
    NSDictionary * _IDToRXMap;
    NSDictionary * _RXToIDMap;
    NSObject<OS_os_log> * _log;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)decodeAppClipCodeFromBytes:(const char *)arg1 length:(unsigned long long)arg2 allowUnsupportedRX:(bool)arg3 error:(id*)arg4;
- (id)decodeAppClipCodeFromData:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeFromHexString:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeV1FromBuffer:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeV2FromBuffer:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeV3FromBuffer:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeV4FromBuffer:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (id)decodeAppClipCodeV5FromBuffer:(id)arg1 allowUnsupportedRX:(bool)arg2 error:(id*)arg3;
- (unsigned long long)decodeAppClipCodeVersionFromBuffer:(id)arg1 error:(id*)arg2;
- (unsigned long long)decodeCalibrationRXID:(unsigned long long*)arg1 calibrationSphere:(float*)arg2 calibrationCylinder:(float*)arg3 calibrationAxis:(unsigned long long*)arg4 addVR:(float*)arg5 clampingStatus:(unsigned long long*)arg6 displaySphere:(float*)arg7 displayCylinder:(float*)arg8 displayAxis:(unsigned long long*)arg9 fromRXID:(unsigned long long)arg10 RXOffsetID:(unsigned long long)arg11 cylinderSignFlipped:(bool)arg12 axisID:(unsigned long long)arg13 allowUnsupportedRX:(bool)arg14;
- (id)derivePayloadWithLensTypeZeroed:(id)arg1 ifLensTypeIs:(unsigned long long)arg2;
- (id)derivePayloadWithSoftwareBitsZeroedFromPayload:(id)arg1;
- (bool)encodeAppClipCode:(id)arg1 toBytes:(char *)arg2 length:(unsigned long long)arg3 error:(id*)arg4;
- (bool)encodeAppClipCode:(id)arg1 toData:(id)arg2 error:(id*)arg3;
- (id)encodeAppClipCodeToHexString:(id)arg1 error:(id*)arg2;
- (bool)encodeAppClipCodeV1:(id)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (bool)encodeAppClipCodeV2:(id)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (bool)encodeAppClipCodeV3:(id)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (bool)encodeAppClipCodeV4:(id)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (bool)encodeAppClipCodeV5:(id)arg1 toBuffer:(id)arg2 error:(id*)arg3;
- (unsigned long long)encodeSphere:(float)arg1 cylinder:(float)arg2 axis:(unsigned long long)arg3 toRXID:(unsigned long long*)arg4 axisID:(unsigned long long*)arg5;
- (id)errorForStatus:(unsigned long long)arg1 leftLens:(bool)arg2;
- (id)generateAppClipCodeWithVersion:(unsigned long long)arg1 lensType:(unsigned long long)arg2 haveLeftLens:(bool)arg3 leftSphere:(float)arg4 leftCylinder:(float)arg5 leftAxis:(unsigned long long)arg6 leftAddVR:(float)arg7 haveRightLens:(bool)arg8 rightSphere:(float)arg9 rightCylinder:(float)arg10 rightAxis:(unsigned long long)arg11 rightAddVR:(float)arg12 identifyingColor:(unsigned long long)arg13 secret:(id)arg14 error:(id*)arg15;
- (bool)getIndexForQuarterDiopterValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 index:(unsigned long long*)arg4;
- (bool)getQuarterDiopterValueForIndex:(unsigned long long)arg1 minValue:(float)arg2 maxValue:(float)arg3 value:(float*)arg4;
- (id)init;
- (bool)isACCVersionSupported:(unsigned long long)arg1;
- (unsigned long long)lookUpAxisID:(unsigned long long*)arg1 forAxisValue:(unsigned long long)arg2;
- (unsigned long long)lookUpAxisValue:(unsigned long long*)arg1 forAxisID:(unsigned long long)arg2;
- (unsigned long long)lookUpRXID:(unsigned long long*)arg1 forSphereValue:(float)arg2 cylinderValue:(float)arg3;
- (unsigned long long)lookUpSphereValue:(float*)arg1 cylinderValue:(float*)arg2 forRXID:(unsigned long long)arg3;
- (unsigned long long)lookupBestValidRXID:(unsigned long long*)arg1 andSphere:(float*)arg2 matchingCylinder:(float)arg3 nearSphere:(float)arg4;
- (id)mergeLeftAppClipCode:(id)arg1 withRightAppClipCode:(id)arg2 error:(id*)arg3;
- (unsigned long long)payloadLengthForAppClipCodeVersion:(unsigned long long)arg1;
- (float)vRxFromAddValue:(float)arg1 andSphereValue:(float)arg2;

@end
