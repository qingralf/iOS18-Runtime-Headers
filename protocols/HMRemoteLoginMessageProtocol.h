/* Generated by RuntimeBrowser.
 */

@protocol HMRemoteLoginMessageProtocol <NSObject, NSSecureCoding>

@required

+ (NSString *)messageName;
+ (id)objWithDict:(NSDictionary *)arg1;
+ (id)objWithMessage:(HMFMessage *)arg1;

- (NSString *)messageName;
- (NSDictionary *)messagePayload;

@end
