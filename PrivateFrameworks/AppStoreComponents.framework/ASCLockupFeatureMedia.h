/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCLockupFeatureMedia : NSObject <ASCLockupFeature> {
    ASCScreenshots * _screenshots;
    ASCTrailers * _trailers;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCScreenshots *screenshots;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) ASCTrailers *trailers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenshots:(id)arg1 trailers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)screenshots;
- (id)trailers;

@end
