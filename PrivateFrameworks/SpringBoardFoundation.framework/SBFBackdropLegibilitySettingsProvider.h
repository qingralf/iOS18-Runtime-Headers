/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropLegibilitySettingsProvider : NSObject <SBFLegibilitySettingsProvider, _UIBackdropViewObserver> {
    _UIBackdropView * _backdropView;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithBackdropView:(id)arg1;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;

@end
