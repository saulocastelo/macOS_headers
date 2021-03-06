//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/NSSecureCoding-Protocol.h>

@class ADNotificationBusStation, DatabaseController, GraphManagerState, RemoteProcessingBlockADMGraph, VolumeManager;

@interface GraphManager : NSObject <NSSecureCoding>
{
    GraphManagerState *_state;
    struct unique_ptr<adm::graph::GraphBuilder, std::__1::default_delete<adm::graph::GraphBuilder>> _graphBuilder;
    struct shared_ptr<adm::graph::ParameterStorageInterface> _graphParameterStorage;
    struct shared_ptr<adm::graph::PropertyStorageInterface> _graphPropertyStorage;
    RemoteProcessingBlockADMGraph *_remoteProcessingBlock;
    VolumeManager *_volumeManager;
    DatabaseController *_databaseController;
    ADNotificationBusStation *_busStation;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak ADNotificationBusStation *busStation; // @synthesize busStation=_busStation;
@property(nonatomic) __weak VolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)registerInternalComponents;
- (expected_24968c28)getActiveMicrophoneConfigurationIDForPort:(unsigned long long)arg1 ioController:(unsigned long long)arg2;
- (void)applyAdaptTransaction:(id)arg1;
- (void)updateVolumeManager:(id)arg1 graph:(struct Graph *)arg2;
- (id)createAdaptTransactionWithRequests:(id)arg1 notificationBusStation:(id)arg2 error:(id *)arg3;
- (id)initWithDatabaseController:(id)arg1 volumeManager:(id)arg2;

@end

