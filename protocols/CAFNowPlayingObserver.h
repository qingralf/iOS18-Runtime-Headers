/* Generated by RuntimeBrowser.
 */

@protocol CAFNowPlayingObserver <CAFServiceObserver>

@required

- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateAlbum:(NSString *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateArtist:(NSString *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateArtwork:(NSData *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateCurrentMediaSourceIdentifier:(NSString *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateJumpBackwardInterval:(NSMeasurement *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateJumpForwardInterval:(NSMeasurement *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdatePlaybackState:(unsigned char)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)nowPlayingService:(CAFNowPlaying *)arg1 didUpdateUserVisibleDescription:(NSString *)arg2;
- (void)nowPlayingServiceDidUpdateBeginSeekBackward:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateBeginSeekForward:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateJumpBackward:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateJumpForward:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateNextItem:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdatePause:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdatePlay:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdatePreviousItem:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateSetArtistSongNotification:(CAFNowPlaying *)arg1;
- (void)nowPlayingServiceDidUpdateStop:(CAFNowPlaying *)arg1;

@end
