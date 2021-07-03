SELECT lyft_users.name, lyft_rides_log.distance
FROM lyft_users
INNER JOIN lyft_rides_log ON lyft_users.id = lyft_rides_log.user_id
ORDER BY lyft_rides_log.distance DESC, lyft_users.name, lyft_rides_log.id
LIMIT 100
