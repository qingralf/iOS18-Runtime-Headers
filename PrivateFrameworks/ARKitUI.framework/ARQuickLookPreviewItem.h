/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitUI.framework/ARKitUI
 */

@interface ARQuickLookPreviewItem : NSObject <QLPreviewItem, QLPreviewItemPrivateProtocol> {
    bool  _allowsContentScaling;
    NSURL * _canonicalWebPageURL;
    NSURL * _fileURL;
    bool  _forceIgnoreMuteSwitch;
    bool  _wantsStatusPillHidden;
}

@property (readonly) NSString *MIMEType; /* unknown property attribute: ? */
@property (nonatomic) bool allowsContentScaling;
@property (readonly) NSURL *alternateShareURL; /* unknown property attribute: ? */
@property (readonly) double autoPlaybackPosition; /* unknown property attribute: ? */
@property (readonly) UIColor *backgroundColorOverride; /* unknown property attribute: ? */
@property (nonatomic, retain) NSURL *canonicalWebPageURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic) bool forceIgnoreMuteSwitch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPromisedItem; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *previewItemContentType; /* unknown property attribute: ? */
@property (nonatomic, copy) NSDictionary *previewItemDisplayState; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSString *previewItemTitle; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) NSURL *previewItemURLForDisplay; /* unknown property attribute: ? */
@property (nonatomic, copy) NSDictionary *previewOptions; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic) bool wantsStatusPillHidden;

- (void).cxx_destruct;
- (bool)allowsContentScaling;
- (id)canonicalWebPageURL;
- (id)fileURL;
- (bool)forceIgnoreMuteSwitch;
- (id)initWithFileAtURL:(id)arg1;
- (id)previewItemURL;
- (id)previewOptions;
- (void)setAllowsContentScaling:(bool)arg1;
- (void)setCanonicalWebPageURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setForceIgnoreMuteSwitch:(bool)arg1;
- (void)setWantsStatusPillHidden:(bool)arg1;
- (bool)wantsStatusPillHidden;

@end