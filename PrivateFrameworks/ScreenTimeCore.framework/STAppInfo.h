/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STAppInfo : NSObject {
    unsigned long long  _adamID;
    NSData * _artworkData;
    NSURL * _artworkURL;
    unsigned long long  _betaVersionIdentifier;
    NSString * _bundleIdentifier;
    NSString * _developerName;
    NSString * _displayName;
    NSString * _distributorID;
    bool  _distributorIsThirdParty;
    NSURL * _localURL;
    short  _platform;
    NSString * _ratingLabel;
    long long  _source;
    unsigned long long  _versionIdentifier;
}

@property (nonatomic) unsigned long long adamID;
@property (copy) NSData *artworkData;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic) unsigned long long betaVersionIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *developerName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *distributorID;
@property (nonatomic) bool distributorIsThirdParty;
@property (nonatomic, copy) NSURL *localURL;
@property (nonatomic) short platform;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long versionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)adamID;
- (id)artworkData;
- (id)artworkURL;
- (unsigned long long)betaVersionIdentifier;
- (id)bundleIdentifier;
- (id)description;
- (id)developerName;
- (id)displayName;
- (id)distributorID;
- (bool)distributorIsThirdParty;
- (id)localURL;
- (short)platform;
- (id)ratingLabel;
- (void)setAdamID:(unsigned long long)arg1;
- (void)setArtworkData:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setBetaVersionIdentifier:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDistributorID:(id)arg1;
- (void)setDistributorIsThirdParty:(bool)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setPlatform:(short)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setVersionIdentifier:(unsigned long long)arg1;
- (long long)source;
- (unsigned long long)versionIdentifier;

@end