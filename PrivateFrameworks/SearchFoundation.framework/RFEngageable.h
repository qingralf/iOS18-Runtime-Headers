/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFEngageable : NSObject <NSCopying, NSSecureCoding, RFEngageable> {
    SFCommandReference * _command_reference;
    struct { 
        unsigned int command_reference : 1; 
        unsigned int preview_list : 1; 
    }  _has;
    RFPreviewList * _preview_list;
}

@property (nonatomic, retain) SFCommandReference *command_reference;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFPreviewList *preview_list;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)command_reference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCommand_reference;
- (bool)hasPreview_list;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)preview_list;
- (void)setCommand_reference:(id)arg1;
- (void)setPreview_list:(id)arg1;

@end
