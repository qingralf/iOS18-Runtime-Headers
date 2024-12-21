/* Generated by RuntimeBrowser.
 */

@protocol AVAudioSecureSessionProtocol <NSObject>

@required

- (double)IOBufferDuration;
- (unsigned long long)IOBufferFrameSize;
- (NSArray *)availableCategories;
- (NSArray *)availableModes;
- (NSString *)category;
- (double)inputLatency;
- (double)inputSampleRate;
- (NSString *)mode;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setCategory:(NSString *)arg1 error:(id*)arg2;
- (bool)setCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end