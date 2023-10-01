SELECT AVG(energy) as avg_energi
FROM songs
WHERE artist_id IN (SELECT id FROM artists WHERE name = 'Drake');