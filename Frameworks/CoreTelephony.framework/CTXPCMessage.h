/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCMessage : NSObject <NSSecureCoding> {
    NSDictionary * _namedArguments;
}

@property (nonatomic, retain) NSDictionary *namedArguments;

+ (id)allowedClassesForArguments;
+ (bool)isSensitiveMessage;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamedArguments:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)namedArguments;
- (void)setNamedArguments:(id)arg1;

@end
