/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {
    <TPDialerKeypadDelegate> * _delegate;
    bool  _playsSounds;
    TPDialerSoundController * _soundController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <TPDialerKeypadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool playsSounds;
@property (retain) TPDialerSoundController *soundController;
@property (readonly) Class superclass;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;

- (void).cxx_destruct;
- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonUpOutside:(id)arg1;
- (id)delegate;
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (bool)playsSounds;
- (void)setDelegate:(id)arg1;
- (void)setPlaysSounds:(bool)arg1;
- (void)setSoundController:(id)arg1;
- (id)soundController;

@end
