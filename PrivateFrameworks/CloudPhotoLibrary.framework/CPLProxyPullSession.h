/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)arg1;

@end
