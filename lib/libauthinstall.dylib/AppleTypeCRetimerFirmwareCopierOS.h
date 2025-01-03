/* Generated by RuntimeBrowser
   Image: /usr/lib/libauthinstall.dylib
 */

@interface AppleTypeCRetimerFirmwareCopierOS : AppleTypeCRetimerRestoreInfoHelperOS {
    NSURL * _destBundlePathURL;
    NSURL * _firmwareBundleURL;
    NSData * _firmwareInBundleDataDict;
    NSData * _firmwareOverrideData;
    NSString * _firmwarePathSuffix;
}

- (void).cxx_destruct;
- (bool)copyFirmwareToDestinationBundleWithError:(id*)arg1;
- (bool)createDestinationBundleFirmwareDirectoryFor:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (bool)parseOptions:(id)arg1;
- (id)readFirmwareFileDataWithError:(id*)arg1;
- (id)rtKitKeyFromBuildIdentityDict:(id)arg1;

@end
