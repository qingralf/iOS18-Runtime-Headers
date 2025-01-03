/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCLockupFeatureGenre : NSObject <ASCLockupFeature> {
    NSString * _genreID;
    NSString * _genreName;
    NSArray * _subgenres;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *genreID;
@property (nonatomic, readonly, copy) NSString *genreName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *subgenres;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genreID;
- (id)genreName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenreName:(id)arg1 genreID:(id)arg2 subgenres:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)subgenres;

@end
