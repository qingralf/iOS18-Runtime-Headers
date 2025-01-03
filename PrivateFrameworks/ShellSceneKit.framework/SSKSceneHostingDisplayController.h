/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShellSceneKit.framework/ShellSceneKit
 */

@interface SSKSceneHostingDisplayController : NSObject <SSKDisplayControlling> {
    SSKSceneHostingDisplayControllerAdapter * _adapter;
    <SSKSceneHostingDisplayControllerDelegate> * _delegate;
    SSKDisplayProfileConfiguration * _profileConfiguration;
    SSKUpdateDisplayTransformsAdapter * _updateTransformsAdapter;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SSKSceneHostingDisplayControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayTransformUpdater:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5;
- (id)delegate;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1;
- (void)displayAssertionDidLoseControlOfDisplay:(id)arg1;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)initWithProfileConfiguration:(id)arg1 displayIdentity:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
