/* Generated by RuntimeBrowser.
 */

@protocol IMMessageChatItem <IMFallibleChatItem>

@required

- (bool)failed;
- (bool)isFromMe;
- (IMHandle *)sender;
- (NSDate *)time;

@end