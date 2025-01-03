/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAssetExclaveServices.framework/MobileAssetExclaveServices
 */

@interface SecureMobileAssetExclave.MobileAssetExclaveServicesManager : NSObject <MAExclaveManifestStorageServiceProtocol> {
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  log;
    void tbClient;
}

- (void).cxx_destruct;
- (bool)checkManifestForFSTag:(unsigned int)arg1 staged:(bool)arg2 manifest:(id)arg3 infoPlist:(id)arg4 catalog:(id)arg5 isValid:(bool*)arg6 error:(id*)arg7;
- (bool)commitStagedManifestForFSTags:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithConclave:(bool)arg1;
- (bool)invalidateManifestForFSTag:(unsigned int)arg1 error:(id*)arg2;
- (id)proposeNonce:(id*)arg1;
- (bool)stageManifest:(id)arg1 infoPlist:(id)arg2 catalog:(id)arg3 error:(id*)arg4;
- (bool)storeManifest:(id)arg1 infoPlist:(id)arg2 catalog:(id)arg3 error:(id*)arg4;

@end
