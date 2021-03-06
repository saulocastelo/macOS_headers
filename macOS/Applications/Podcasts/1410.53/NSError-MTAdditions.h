//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

#import "IMJSONSerializableValueProviding-Protocol.h"
#import "IMMetricsDataSource-Protocol.h"

@class NSString;

@interface NSError (MTAdditions) <IMMetricsDataSource, IMJSONSerializableValueProviding>
- (void)createErrorStackTraceForErrorCodes:(id)arg1 andThrow:(id)arg2;
- (void)collectErrorsAndThrow:(id)arg1;
- (void)_NSPersistentHistoryTokenExpiredError:(id)arg1 andThrow:(id)arg2;
- (void)_NSExternalRecordImportError:(id)arg1 andThrow:(id)arg2;
- (void)_NSInferredMappingModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSSQLiteError:(id)arg1 andThrow:(id)arg2;
- (void)_NSEntityMigrationPolicyError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationManagerDestinationStoreError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationManagerSourceStoreError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationMissingMappingModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationMissingSourceModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationCancelledError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationConstraintViolationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompatibleVersionHashError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreUnsupportedRequestTypeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreTimeoutError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreOpenError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreOperationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSCoreDataError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreSaveConflictsError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompleteSaveError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreSaveError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompatibleSchemaError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreTypeMismatchError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreInvalidTypeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectConstraintMergeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectMergeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectExternalRelationshipError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectReferentialIntegrityError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreCoordinatorLockingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectContextLockingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationInvalidURIError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringPatternMatchingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringTooShortError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringTooLongError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationInvalidDateError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationDateTooSoonError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationDateTooLateError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationNumberTooSmallError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationNumberTooLargeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipDeniedDeleteError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipExceedsMaximumCountError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipLacksMinimumCountError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationMissingMandatoryPropertyError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationMultipleErrorsError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectConstraintValidationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectValidationError:(id)arg1 andThrow:(id)arg2;
- (void)logAndThrow:(BOOL)arg1;
- (void)logAndThrow:(BOOL)arg1 printStackTrace:(BOOL)arg2;
- (id)metricsAdditionalData;
- (id)metricsContentIdentifier;
- (void)recordMetrics;
- (id)im_jsonSerializableValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

