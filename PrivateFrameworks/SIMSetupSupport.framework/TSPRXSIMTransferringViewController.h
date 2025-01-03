/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSPRXSIMTransferringViewController : TSIDSSimTransferringViewController {
    CoreTelephonyClient * _client;
    IMOneTimeCodeAccelerator * _oneTimeCodeAccelerator;
    bool  _otpDetectorNeeded;
}

@property (retain) CoreTelephonyClient *client;
@property (retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;
@property bool otpDetectorNeeded;

- (void).cxx_destruct;
- (void)_maybeEnableOneTimeCodeCheck;
- (void)_setupOneTimeCodeDetection;
- (id)client;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 otpDetectorNeeded:(bool)arg3;
- (id)oneTimeCodeAccelerator;
- (bool)otpDetectorNeeded;
- (void)setClient:(id)arg1;
- (void)setOneTimeCodeAccelerator:(id)arg1;
- (void)setOtpDetectorNeeded:(bool)arg1;

@end
