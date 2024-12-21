/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShellSceneKit.framework/ShellSceneKit
 */

@interface SSKNullDisplayController : NSObject <SSKDisplayControlling> {
    NSMutableDictionary * _connectedDisplays;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayTransformUpdater:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1;
- (void)displayAssertionDidLoseControlOfDisplay:(id)arg1;
- (id)displayConfigurationForIdentity:(id)arg1;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)init;
- (bool)isConnectedToDisplay:(id)arg1;

@end