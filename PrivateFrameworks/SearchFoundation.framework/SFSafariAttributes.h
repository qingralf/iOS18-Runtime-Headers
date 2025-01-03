/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSafariAttributes : NSObject <NSCopying, NSSecureCoding, SFSafariAttributes> {
    struct { 
        unsigned int hideReason : 1; 
    }  _has;
    int  _hideReason;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hideReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHideReason;
- (unsigned long long)hash;
- (int)hideReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setHideReason:(int)arg1;

@end
