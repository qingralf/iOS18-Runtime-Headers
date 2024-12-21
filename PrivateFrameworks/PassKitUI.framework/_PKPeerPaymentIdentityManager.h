/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface _PKPeerPaymentIdentityManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _accountPreferences;
    void _appearanceData;
    void _committedPrefs;
    void _delegate;
    void _mutablePrefs;
    void _profilePictureData;
    void _shareLastName;
    void _shareProfilePicture;
    void firstName;
    void lastName;
    void queue;
    void service;
}

@property (nonatomic, retain) PKPeerPaymentProfileAppearanceData *_appearanceData;
@property (nonatomic) <_PeerPaymentIdentityManagerDelegate> *_delegate;
@property (nonatomic, copy) NSData *_profilePictureData;
@property (nonatomic) bool _shareLastName;
@property (nonatomic) bool _shareProfilePicture;
@property (nonatomic, retain) PKPeerPaymentProfileAppearanceData *appearanceData;
@property (nonatomic) <_PeerPaymentIdentityManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, copy) NSData *profilePictureData;
@property (nonatomic) bool shareLastName;
@property (nonatomic) bool shareProfilePicture;

- (void).cxx_destruct;
- (id)_appearanceData;
- (id)_delegate;
- (id)_profilePictureData;
- (bool)_shareLastName;
- (bool)_shareProfilePicture;
- (id)appearanceData;
- (void)commitUpdatesIfNeeded;
- (id)delegate;
- (id)firstName;
- (id)init;
- (id)lastName;
- (id)profilePictureData;
- (void)setAppearanceData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProfilePictureData:(id)arg1;
- (void)setShareLastName:(bool)arg1;
- (void)setShareProfilePicture:(bool)arg1;
- (void)set_appearanceData:(id)arg1;
- (void)set_delegate:(id)arg1;
- (void)set_profilePictureData:(id)arg1;
- (void)set_shareLastName:(bool)arg1;
- (void)set_shareProfilePicture:(bool)arg1;
- (bool)shareLastName;
- (bool)shareProfilePicture;

@end