/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {
    NSError * _error;
    bool  hasFileProviderAttributionMDMAccess;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasFileProviderAttributionMDMAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)cancelAsync;
- (void)dumpStateTo:(id)arg1;
- (id)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(bool)arg2 pid:(int)arg3;
- (bool)hasFileProviderAttributionMDMAccess;
- (id)init;
- (id)initWithError:(id)arg1;
- (void)invalidate;
- (id)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)start;
- (void)terminateWithReason:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;

@end
