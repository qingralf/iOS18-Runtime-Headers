/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface _EMSectionedMessageListItemID : NSObject <EFCacheable, EMSectionedMessageListItemID> {
    <NSObject><NSCopying> * _sectionID;
    <EMCollectionItemID> * _underlyingItemID;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSObject><NSCopying> *sectionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMCollectionItemID> *underlyingItemID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedSelf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1 sectionID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)sectionID;
- (id)underlyingItemID;

@end