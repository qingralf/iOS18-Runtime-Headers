/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVenueComponentIdentifier : NSObject <GEOVenueComponentIdentifier> {
    unsigned long long  _buildingID;
    unsigned long long  _fixtureID;
    <GEOVenueFloorInfo> * _floorInfo;
    bool  _hasBuildingID;
    bool  _hasFixtureID;
    bool  _hasUnitID;
    NSArray * _sectionIDs;
    unsigned long long  _unitID;
}

@property (nonatomic, readonly) unsigned long long buildingID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fixtureID;
@property (nonatomic, readonly) <GEOVenueFloorInfo> *floorInfo;
@property (getter=_hasBuildingID, nonatomic, readonly) bool hasBuildingID;
@property (getter=_hasFixtureID, nonatomic, readonly) bool hasFixtureID;
@property (getter=_hasUnitID, nonatomic, readonly) bool hasUnitID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sectionIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unitID;

- (void).cxx_destruct;
- (bool)_hasBuildingID;
- (bool)_hasFixtureID;
- (bool)_hasUnitID;
- (unsigned long long)buildingID;
- (unsigned long long)fixtureID;
- (id)floorInfo;
- (id)init;
- (id)initWithBuildingID:(unsigned long long)arg1;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 fixtureID:(unsigned long long)arg3;
- (id)initWithBuildingID:(unsigned long long)arg1 floorInfo:(id)arg2 unitID:(unsigned long long)arg3;
- (id)initWithVenueIdentifier:(id)arg1;
- (id)sectionIDs;
- (unsigned long long)unitID;

@end
