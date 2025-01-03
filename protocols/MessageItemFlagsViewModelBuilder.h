/* Generated by RuntimeBrowser.
 */

@protocol MessageItemFlagsViewModelBuilder <NSObject>

@required

- (NSIndexSet *)flagColors;
- (bool)isFlagged;
- (bool)isForwarded;
- (bool)isJunk;
- (bool)isMute;
- (bool)isNotify;
- (bool)isRead;
- (bool)isRedirected;
- (bool)isReplied;
- (bool)isVIP;
- (void)setFlagColors:(NSIndexSet *)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setJunk:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setNotify:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setRedirected:(bool)arg1;
- (void)setReplied:(bool)arg1;
- (void)setVIP:(bool)arg1;

@end
