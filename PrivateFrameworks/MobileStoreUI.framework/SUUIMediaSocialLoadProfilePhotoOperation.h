/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {
    SUUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
    SUUIMediaSocialProfile * _profile;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (void)_fetchMonogram;
- (void)_fetchPhoto;
- (void)_fetchProfile;
- (void)_returnPhoto:(id)arg1 isFinal:(bool)arg2;
- (id)_silhouette;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
