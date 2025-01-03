/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRepairCore.framework/CoreRepairCore
 */

@interface CRFDRLegacyDeviceHandler : CRFDRBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isLegacyProductType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg1 withError:(id*)arg2;
- (bool)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 makeClasses:(id*)arg3 makeInstances:(id*)arg4 makePropertiesDict:(id*)arg5 fdrError:(id*)arg6;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 makePropertiesDict:(id*)arg3 fdrError:(id*)arg4;
- (id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg1 withError:(id*)arg2;
- (id)spcInPartSPC:(id)arg1 withDataClass:(id)arg2;

@end
