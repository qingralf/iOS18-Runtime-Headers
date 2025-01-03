/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIArtwork : NSObject <NSSecureCoding, SUUICacheCoding> {
    long long  _height;
    NSURL * _url;
    NSString * _urlString;
    long long  _width;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation; /* unknown property attribute: ? */
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_lookupDictionary;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)height;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)width;

@end
