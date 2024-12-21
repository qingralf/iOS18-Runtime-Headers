/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliGroupChatParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _member;
    long long  _role;
}

@property (nonatomic, retain) NSString *member;
@property (nonatomic) long long role;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliGroupChatParticipant:(id)arg1;
- (id)member;
- (long long)role;
- (void)setMember:(id)arg1;
- (void)setRole:(long long)arg1;

@end