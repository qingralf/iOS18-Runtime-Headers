/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIQueryContext : NSObject <NSCopying> {
    NSString * _applicationIdentifier;
    NSArray * _catalogIDs;
    NSString * _countryCode;
    NSDictionary * _customDetectorThreshold;
    NSString * _engagementSuggestionType;
    NSString * _featureIdentifier;
    double  _frameTimestamp;
    long long  _imageType;
    NSURL * _imageURL;
    bool  _includeLowConfidenceRegions;
    double  _lastSearchTimestamp;
    NSString * _locale;
    CLLocation * _location;
    <MTLDevice> * _preferredMetalDevice;
    unsigned long long  _queryID;
    NSURL * _referralURL;
    NSString * _teamID;
    double  _uiScale;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSArray *catalogIDs;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDictionary *customDetectorThreshold;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *engagementSuggestionType;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) double frameTimestamp;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) bool includeLowConfidenceRegions;
@property (nonatomic, readonly) double lastSearchTimestamp;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) <MTLDevice> *preferredMetalDevice;
@property (nonatomic, readonly) unsigned long long queryID;
@property (nonatomic, readonly) NSURL *referralURL;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) double uiScale;

+ (id)contextWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)catalogIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)customDetectorThreshold;
- (id)description;
- (id)engagementSuggestionType;
- (id)featureIdentifier;
- (double)frameTimestamp;
- (long long)imageType;
- (id)imageURL;
- (bool)includeLowConfidenceRegions;
- (id)initWithQueryID:(unsigned long long)arg1 applicationIdentifier:(id)arg2 uiScale:(double)arg3 teamID:(id)arg4 catalogIDs:(id)arg5 frameTimestamp:(double)arg6 lastSearchTimestamp:(double)arg7 location:(id)arg8 imageURL:(id)arg9 referralURL:(id)arg10 imageType:(long long)arg11 featureIdentifier:(id)arg12 engagementSuggestionType:(id)arg13 locale:(id)arg14 countryCode:(id)arg15 preferredMetalDevice:(id)arg16 includeLowConfidenceRegions:(bool)arg17 customDetectorThreshold:(id)arg18;
- (double)lastSearchTimestamp;
- (id)locale;
- (id)location;
- (id)preferredMetalDevice;
- (unsigned long long)queryID;
- (id)referralURL;
- (id)teamID;
- (double)uiScale;

@end
