/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFInvokeSiriCommand : SFCommand <NSCopying, NSSecureCoding, SFInvokeSiriCommand> {
    NSString * _utteranceText;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, retain) SFCommandReference *commandReference;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *utteranceText;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setUtteranceText:(id)arg1;
- (id)utteranceText;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

@end
