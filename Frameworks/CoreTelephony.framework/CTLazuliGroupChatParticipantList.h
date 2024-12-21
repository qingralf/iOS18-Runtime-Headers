/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliGroupChatParticipantList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _list;
    NSArray * _memberList;
}

@property (nonatomic, retain) NSArray *list;
@property (nonatomic, retain) NSArray *memberList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliGroupChatParticipantList:(id)arg1;
- (id)list;
- (id)memberList;
- (void)setList:(id)arg1;
- (void)setMemberList:(id)arg1;

@end