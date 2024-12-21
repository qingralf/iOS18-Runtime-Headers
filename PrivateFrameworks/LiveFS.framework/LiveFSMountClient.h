/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@interface LiveFSMountClient : NSObject {
    NSXPCConnection * conn;
    NSObject<LiveFSMounterClient><LiveFSMounterClientHelper> * helper;
    NSString * provider;
}

+ (id)newClient;
+ (id)newClientForProvider:(id)arg1;

- (void).cxx_destruct;
- (id)allMounts:(id*)arg1;
- (void)dealloc;
- (id)fixupConnectionFor:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(int)arg6;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(unsigned long long)arg6 options:(id)arg7;
- (id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 on:(id)arg4 how:(int)arg5;
- (id)mountVolume:(id)arg1 fileSystem:(id)arg2 displayName:(id)arg3 provider:(id)arg4 domainError:(id)arg5 on:(id)arg6 how:(int)arg7;
- (id)mountVolume:(id)arg1 fileSystem:(id)arg2 displayName:(id)arg3 provider:(id)arg4 domainError:(id)arg5 on:(id)arg6 how:(unsigned long long)arg7 options:(id)arg8;
- (id)mountVolume:(id)arg1 fileSystem:(id)arg2 displayName:(id)arg3 provider:(id)arg4 domainError:(id)arg5 on:(id)arg6 how:(unsigned long long)arg7 options:(id)arg8 auditToken:(struct { unsigned int x1[8]; })arg9;
- (id)mountVolume:(id)arg1 provider:(id)arg2 on:(id)arg3 how:(int)arg4;
- (id)mounts:(id*)arg1;
- (id)setVerboseLevel:(int)arg1;
- (id)unmountVolume:(id)arg1 how:(int)arg2;
- (id)unmountVolumeByID:(unsigned int)arg1 how:(int)arg2;
- (void)unmountVolumeNamed:(id)arg1 providerName:(id)arg2 domainError:(id)arg3 how:(int)arg4 reply:(id /* block */)arg5;
- (id)updateErrorStateForVolume:(id)arg1 provider:(id)arg2 domainError:(id)arg3;
- (int)verboseLevelOrError:(id*)arg1;

@end