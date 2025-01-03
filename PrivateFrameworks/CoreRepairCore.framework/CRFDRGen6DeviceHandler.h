/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairCore.framework/CoreRepairCore
 */

@interface CRFDRGen6DeviceHandler : CRFDRGen3DeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isGen6ProductType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg1 withError:(id*)arg2;
- (bool)getMinimalManifestsClassesAndInstancesWithPartSPC:(id)arg1 fdrLocal:(struct __AMFDR { }*)arg2 fdrRemote:(struct __AMFDR { }*)arg3 minimalSealingDataInstances:(id*)arg4 minimalSealedDataClasses:(id*)arg5 minimalSealedDataInstances:(id*)arg6 error:(id*)arg7;
- (id)getPatchInfoPerSPC;
- (id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg1 withError:(id*)arg2;
- (bool)setBrunorMinimalSealingMeta:(struct __AMFDR { }*)arg1 instances:(id)arg2;
- (bool)supportCameraDepth;
- (bool)supportMctubMinus;
- (bool)supportPatch;

@end
