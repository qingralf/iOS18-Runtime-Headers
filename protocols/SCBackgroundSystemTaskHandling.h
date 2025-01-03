/* Generated by RuntimeBrowser.
 */

@protocol SCBackgroundSystemTaskHandling

@required

- (NSString *)identifier;
- (bool)isRepeating;

@optional

- (id /* block */)nonRepeatingTaskHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, BGNonRepeatingSystemTask *, void*, id, SEL
- (id /* block */)repeatingTaskHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, BGRepeatingSystemTask *, void*, id, SEL

@end
