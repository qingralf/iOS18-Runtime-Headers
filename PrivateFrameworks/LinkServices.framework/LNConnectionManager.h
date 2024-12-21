/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNConnectionManager : NSObject <LNConnectionDelegate> {
    NSMutableDictionary * _connectionsByBundleIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    LNTranscriptPrivilegedProvider * _transcriptProvider;
}

@property (nonatomic, readonly) NSMutableDictionary *connectionsByBundleIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) LNTranscriptPrivilegedProvider *transcriptProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addConnection:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (id)connectionForEffectiveBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 processInstanceIdentifier:(id)arg3 mangledTypeName:(id)arg4 userIdentity:(id)arg5 error:(id*)arg6;
- (id)connectionsByBundleIdentifier;
- (void)donateActionRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateAllConnections;
- (id)newConnectionForEffectiveBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 processInstanceIdentifier:(id)arg3 mangledTypeName:(id)arg4 userIdentity:(id)arg5 error:(id*)arg6;
- (void)removeConnection:(id)arg1;
- (id)transcriptProvider;

@end