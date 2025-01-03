/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

@interface STKSystemSound : STKBaseSound <STKSound> {
    unsigned int  _systemSoundID;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (id)initForSystemSoundID:(unsigned int)arg1 duration:(double)arg2;

@end
