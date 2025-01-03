/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {
    IKJSViewModelLink * _link;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)onCancel;
- (void)onSend;

@end
